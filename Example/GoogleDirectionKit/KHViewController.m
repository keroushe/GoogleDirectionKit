//
//  KHViewController.m
//  GoogleDirectionKit
//
//  Created by keroushe on 05/17/2021.
//  Copyright (c) 2021 keroushe. All rights reserved.
//

#import "KHViewController.h"
@import GoogleDirectionKit;

@interface KHViewController ()

@end

@implementation KHViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    GoogleDirectionRequestInfo *requestInfo = [[GoogleDirectionRequestInfo alloc] init];
    requestInfo.origin = @"37.7849569, -122.4068855";
    requestInfo.destination = @"37.7814432, -122.4460177";
    requestInfo.apiKey = @"YOUR_API_KEY";
    
    [GoogleDirectionManage startAcceptDirectionInfoWith:requestInfo completion:^(BOOL success, GoogleDirectionResponseParseInfo * _Nonnull resultInfo) {
        //
        NSLog(@"success = %d, resultInfo = %@", success, resultInfo);
        NSAssert(success, @"请求失败!!!");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
