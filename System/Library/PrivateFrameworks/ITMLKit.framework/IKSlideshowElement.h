/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic,readonly) long long showSettings; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,readonly) unsigned long long transition; 
@property (nonatomic,readonly) double transitionInterval; 
-(NSArray *)images;
-(unsigned long long)transition;
-(double)transitionInterval;
-(long long)showSettings;
@end

