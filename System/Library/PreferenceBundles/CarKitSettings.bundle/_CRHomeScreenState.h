/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CRHomeScreenState.h>

@class NSArray, NSString;

@interface _CRHomeScreenState : NSObject <CRHomeScreenState> {

	NSArray* _iconState;
	NSArray* _hiddenIcons;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (nonatomic,copy) NSArray * iconState;                       //@synthesize iconState=_iconState - In the implementation block
@property (nonatomic,copy) NSArray * hiddenIcons;                     //@synthesize hiddenIcons=_hiddenIcons - In the implementation block
@property (assign,nonatomic) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)hiddenIcons;
-(NSArray *)iconState;
-(void)setIconState:(NSArray *)arg1 ;
-(void)setHiddenIcons:(NSArray *)arg1 ;
-(unsigned long long)rows;
-(void)setRows:(unsigned long long)arg1 ;
-(unsigned long long)columns;
-(void)setColumns:(unsigned long long)arg1 ;
@end

