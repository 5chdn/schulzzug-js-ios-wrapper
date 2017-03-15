//
//  ViewController.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 05.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "GameViewController.h"

#define defaultgameWidth 375

@interface GameViewController ()

@end

@implementation GameViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    NSURL* url = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"Schulzzug-JS/public/index" ofType:@"html"]];
    
    [self.webViewGameRenderer loadRequest:[NSURLRequest requestWithURL:url]];
    
    self.webViewGameRenderer.delegate = self;
    
    UISwipeGestureRecognizer *swipeLeft = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    UISwipeGestureRecognizer *swipeRight = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    UISwipeGestureRecognizer *swipeUp = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    
    // Setting the swipe direction.
    [swipeLeft setDirection:UISwipeGestureRecognizerDirectionLeft];
    [swipeRight setDirection:UISwipeGestureRecognizerDirectionRight];
    [swipeUp setDirection:UISwipeGestureRecognizerDirectionUp];
    
    swipeLeft.delegate = self;
    swipeRight.delegate = self;
    swipeUp.delegate = self;
    
    CGFloat scaleFactor = self.view.frame.size.width / defaultgameWidth;
    self.webViewGameRenderer.transform = CGAffineTransformMakeScale(scaleFactor, scaleFactor);
    
    // Adding the swipe gesture on WebView
    [self.view addGestureRecognizer:swipeLeft];
    [self.view addGestureRecognizer:swipeRight];
    [self.view addGestureRecognizer:swipeUp];

    
    
    self.tapticEngine = [UIImpactFeedbackGenerator new];
    [self.tapticEngine prepare];
    
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)webViewDidFinishLoad:(UIWebView *)webView {
    //[NSTimer scheduledTimerWithTimeInterval:2 repeats:NO block:^(NSTimer * _Nonnull timer) {
        [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"activateIosMode()"];
   // }];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(BOOL)prefersStatusBarHidden {
    return YES;
}


- (void)handleSwipe:(UISwipeGestureRecognizer *)swipe {
    
    if (swipe.direction == UISwipeGestureRecognizerDirectionLeft) {
        
        NSString* result = [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"swipe_direction=1"];
        NSLog(@"Left Swipe: %@",result);
        
    }
    
    if (swipe.direction == UISwipeGestureRecognizerDirectionRight) {
        NSLog(@"Right Swipe");
        [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"swipe_direction=2"];
        
    }
    
    if (swipe.direction == UISwipeGestureRecognizerDirectionUp) {
        NSLog(@"Up Swipe");
        [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"swipe_direction=3"];
        
    }
    
}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
    NSString *actionType = request.URL.host;
    
    if([actionType isEqualToString:@"smashed-wall"]) {
        [self.tapticEngine impactOccurred];
    }
    
    return YES;
}

-(BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    return YES;
}


@end
