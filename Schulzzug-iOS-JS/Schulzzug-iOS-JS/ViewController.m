//
//  ViewController.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 05.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    NSURL* url = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"Schulzzug-JS/index" ofType:@"html"]];
    
    [self.webViewGameRenderer loadRequest:[NSURLRequest requestWithURL:url]];
    
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(BOOL)prefersStatusBarHidden {
    return YES;
}

@end
