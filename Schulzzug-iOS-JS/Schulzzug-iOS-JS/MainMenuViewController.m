//
//  MainMenuViewController.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 07.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "MainMenuViewController.h"
#import "GameViewController.h"
@import SafariServices;

@interface MainMenuViewController ()

@end

@implementation MainMenuViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)feedback:(id)sender {
    SFSafariViewController *sfvc = [[SFSafariViewController alloc] initWithURL:[NSURL URLWithString:@"https://twitter.com/schulzzug"]];
    
    [self presentViewController:sfvc animated:YES completion:nil];
    
    
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"twitter://user?screen_name=schulzzug"]];
}

- (IBAction)startGame:(id)sender {
    GameViewController* gvc = [GameViewController new];
    [self showViewController:gvc sender:self];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
