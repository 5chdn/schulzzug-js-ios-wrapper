//
//  ViewController.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 05.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "ViewController.h"

#define defaultgameWidth 375

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    NSURL* url = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"Schulzzug-JS/index" ofType:@"html"]];
    
    [self.webViewGameRenderer loadRequest:[NSURLRequest requestWithURL:url]];
    
    self.webViewGameRenderer.delegate = self;
    
    UISwipeGestureRecognizer *swipeLeft = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    UISwipeGestureRecognizer *swipeRight = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    
    // Setting the swipe direction.
    [swipeLeft setDirection:UISwipeGestureRecognizerDirectionLeft];
    [swipeRight setDirection:UISwipeGestureRecognizerDirectionRight];
    
    
    CGFloat scaleFactor = self.view.frame.size.width / defaultgameWidth;
    self.webViewGameRenderer.transform = CGAffineTransformMakeScale(scaleFactor, scaleFactor);
    
    [self.webViewGameRenderer.scrollView.panGestureRecognizer requireGestureRecognizerToFail:swipeLeft];
    [self.webViewGameRenderer.scrollView.panGestureRecognizer requireGestureRecognizerToFail:swipeRight];
    
    // Adding the swipe gesture on WebView
    [self.view addGestureRecognizer:swipeLeft];
    [self.view addGestureRecognizer:swipeRight];
    
    self.tapticEngine = [UIImpactFeedbackGenerator new];
    [self.tapticEngine prepare];
    
    // Do any additional setup after loading the view, typically from a nib.
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
        NSLog(@"Left Swipe");
        [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"swipe=1"];
        
    }
    
    if (swipe.direction == UISwipeGestureRecognizerDirectionRight) {
        NSLog(@"Right Swipe");
        [self.webViewGameRenderer stringByEvaluatingJavaScriptFromString:@"swipe=2"];
        
    }
    
}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
    NSString *actionType = request.URL.host;
    
    if([actionType isEqualToString:@"smashed-wall"]) {
        [self.tapticEngine impactOccurred];
    }
    
    return YES;
}


@end
