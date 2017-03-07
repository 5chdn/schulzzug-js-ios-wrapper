//
//  ViewController.h
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 05.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GameViewController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate>

@property (strong, nonatomic) IBOutlet UIWebView *webViewGameRenderer;
@property (strong, nonatomic) UIImpactFeedbackGenerator* tapticEngine;

@end

