//
//  GoogleDirectionConfiguration.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionConfiguration.h"

@implementation GoogleDirectionConfiguration

+ (GoogleDirectionConfiguration *)sharedInstance
{
    static GoogleDirectionConfiguration *instance;
    static dispatch_once_t predicate;
    
    dispatch_once(&predicate, ^{
        instance = [[GoogleDirectionConfiguration alloc] init];
    });
    
    return instance;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _isLogEnabled = YES;
    }
    return self;
}

@end
