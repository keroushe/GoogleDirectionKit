//
//  GoogleDirectionRoute.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionRoute.h"

@implementation GoogleDirectionRoute

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"legs" : [GoogleDirectionLeg class]};
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"legs" : [GoogleDirectionLeg class]};
}

@end
