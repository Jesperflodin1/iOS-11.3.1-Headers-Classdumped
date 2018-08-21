/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol SXEmbedType <NSObject>
@property (nonatomic,readonly) double minimumWidth; 
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * enclosingHTML; 
@property (nonatomic,readonly) NSString * javaScript; 
@property (nonatomic,readonly) unsigned long long autoPlayMedia; 
@required
-(double)minimumWidth;
-(double)maximumWidth;
-(NSURL *)baseURL;
-(NSString *)javaScript;
-(NSString *)enclosingHTML;
-(unsigned long long)autoPlayMedia;

@end

