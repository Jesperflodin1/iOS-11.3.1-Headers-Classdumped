/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString;


@protocol SBSCarPlayApplicationIcon <NSObject>
@property (nonatomic,readonly) NSData * iconImageData; 
@property (nonatomic,readonly) double iconImageScale; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@required
-(double)iconImageScale;
-(NSString *)localizedDisplayName;
-(NSData *)iconImageData;

@end
