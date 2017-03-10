//
//  Level.h
//  Schulzzug-iOS-JS
//
//  Created by Frederik Riedel on 10.03.17.
//  Copyright © 2017 Frederik Riedel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Level : NSObject

@property(strong) NSString* levelIdentifier;
@property(strong) NSString* countryName;

-(id) initWithString:(NSString*) levelString;

@end
