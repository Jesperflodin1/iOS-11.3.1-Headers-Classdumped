/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewElement.h>

@class NSURL, NSDictionary;

@interface TVImageElement : TVViewElement

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * srcset; 
@property (nonatomic,readonly) long long imageType; 
-(NSURL *)URL;
-(long long)imageType;
-(NSDictionary *)srcset;
-(CGSize)imageScaleToSize;
@end

