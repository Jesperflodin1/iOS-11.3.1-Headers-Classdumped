/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CRHomeScreenState <NSObject>
@property (nonatomic,copy,readonly) NSArray * iconState; 
@property (nonatomic,copy,readonly) NSArray * hiddenIcons; 
@property (nonatomic,readonly) unsigned long long rows; 
@property (nonatomic,readonly) unsigned long long columns; 
@required
-(NSArray *)hiddenIcons;
-(NSArray *)iconState;
-(unsigned long long)rows;
-(unsigned long long)columns;

@end

