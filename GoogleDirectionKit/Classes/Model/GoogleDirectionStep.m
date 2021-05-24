//
//  GoogleDirectionStep.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionStep.h"

@implementation GoogleDirectionStep

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"steps" : [GoogleDirectionStep class]};
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"steps" : [GoogleDirectionStep class]};
}

@end
