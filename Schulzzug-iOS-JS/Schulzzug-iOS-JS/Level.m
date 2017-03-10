//
//  Level.m
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 10.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import "Level.h"

@implementation Level

-(id) initWithString:(NSString*) levelString {
    
    self = [super init];
    
    if(self) {
        NSArray* levelProperties = [levelString componentsSeparatedByString:@";"];
        
        self.levelIdentifier = levelProperties[0];
        self.countryName = levelProperties[1];
    }
    
    return self;
}

@end
