//
//  Levels.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 10.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "Levels.h"
#import "Level.h"

@implementation Levels

static NSArray<Level*>* levels;

+(void) initialize {
 //load textfile
    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"Schulzzug-JS/levels" ofType:@"chulz"];
    if (filePath) {
        NSString *levelFile = [NSString stringWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:nil];
        NSMutableArray* levelsStringArray = [NSMutableArray arrayWithArray:[levelFile componentsSeparatedByString:@"\n"]];
        
        //remove description line
        [levelsStringArray removeObjectAtIndex:0];
        NSMutableArray* levelsArray = [NSMutableArray new];
        for(NSString* stringLevel in levelsStringArray) {
            if(![stringLevel isEqualToString:@""]) {
                Level* level = [[Level alloc] initWithString:stringLevel];
                [levelsArray addObject:level];
            }
        }
        
        levels = [NSArray arrayWithArray:levelsArray];
    }
    
    
}

+(NSArray*) levels {
    return levels;
}

@end
