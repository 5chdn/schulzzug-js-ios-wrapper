//
//  LevelViewController.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 10.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "LevelViewController.h"
#import "Levels.h"
#import "Level.h"
#import "GameViewController.h"

@interface LevelViewController ()

@end

@implementation LevelViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSArray* levels = [Levels levels];
    
    self.levelSelectionScrollView.contentSize = CGSizeMake(self.levelSelectionScrollView.frame.size.width, [levels count] * 100 + 150);
    
    int levelIndex = 0;
    for(Level* level in levels) {
        UIButton* levelButton = [UIButton buttonWithType:UIButtonTypeCustom];
        
        levelButton.tag = levelIndex;
        
        [levelButton addTarget:self action:@selector(didSelectLevel:) forControlEvents:UIControlEventTouchUpInside];
        
        [levelButton setImage:[UIImage imageNamed:[NSString stringWithFormat:@"Schulzzug-JS/assets/%@.png",level.levelIdentifier]] forState:UIControlStateNormal];
        
        //start level
        if(levelIndex == 0) {
            levelButton.frame = CGRectMake((self.view.frame.size.width-100)/2, self.levelSelectionScrollView.contentSize.height-100, 100, 100);
        } else {
            levelButton.frame = CGRectMake(50 + (levelIndex%2)*(self.levelSelectionScrollView.frame.size.width-200), self.levelSelectionScrollView.contentSize.height - 150 - levelIndex*100, 100, 100);
        }
        
        [self.levelSelectionScrollView addSubview:levelButton];
        
        levelIndex++;
    }
    
    self.levelSelectionScrollView.contentOffset = CGPointMake(0, self.levelSelectionScrollView.contentSize.height - self.view.frame.size.height);
    
    // Do any additional setup after loading the view.
}

-(void) didSelectLevel:(id) sender {
    GameViewController* game = [[GameViewController alloc] init];
    [self showViewController:game sender:self];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
