/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PreferencesUI/PreferencesUI-Structs.h>
@class UIImageView, NSString;

@interface LocationUsageMixin : NSObject {

	int _usage;
	unsigned long long _authLevel;
	UIImageView* _usageIndicator;
	NSString* _authLevelString;

}

@property (assign,nonatomic) int usage;                                   //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long authLevel;                //@synthesize authLevel=_authLevel - In the implementation block
@property (nonatomic,readonly) UIImageView * usageIndicator;              //@synthesize usageIndicator=_usageIndicator - In the implementation block
@property (nonatomic,readonly) NSString * authLevelString;                //@synthesize authLevelString=_authLevelString - In the implementation block
-(id)init;
-(int)usage;
-(void)setUsage:(int)arg1 ;
-(CGSize)usageIndicatorSize;
-(id)iconNameForUsage:(int)arg1 ;
-(id)_authLevelForMask:(unsigned long long)arg1 ;
-(void)setAuthLevel:(unsigned long long)arg1 ;
-(CGSize)_authLevelLabelSize:(unsigned long long)arg1 ;
-(unsigned long long)authLevel;
-(UIImageView *)usageIndicator;
-(NSString *)authLevelString;
@end

