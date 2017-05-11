//
//  NSTimer+Pausing.h
//  Daslos
//
//  Created by ztkztk on 14-11-1.
//  Copyright (c) 2014年 www.0x123.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Pausing)
- (NSMutableDictionary *)pauseDictionary;

/*
 暂停计时器
 */
- (void)pause;

/*
 重新恢复计时器
 */
- (void)resume;


@end
