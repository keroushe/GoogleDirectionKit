//
//  GoogleDirectionLine.m
//  GoogleDirectionLibrary
//
//  Created by hexs on 2021/3/25.
//

#import "GoogleDirectionLine.h"

@implementation GoogleDirectionLine

+ (NSDictionary *)modelContainerPropertyGenericClass
{
    return @{@"agencies" : [GoogleDirectionAgency class]};
}

+ (NSDictionary *)mj_objectClassInArray
{
    return @{@"agencies" : [GoogleDirectionAgency class]};
}

@end
