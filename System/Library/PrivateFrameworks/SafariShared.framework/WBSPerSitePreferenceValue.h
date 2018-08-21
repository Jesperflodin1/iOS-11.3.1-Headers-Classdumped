/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface WBSPerSitePreferenceValue : NSObject {

	NSString* _localizedString;
	id<NSObject> _tag;

}

@property (nonatomic,readonly) NSString * localizedString;              //@synthesize localizedString=_localizedString - In the implementation block
@property (nonatomic,readonly) id<NSObject> tag;                        //@synthesize tag=_tag - In the implementation block
+(id)binaryOffValue;
+(id)binaryOnValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)tag;
-(id)initWithTag:(id)arg1 localizedString:(id)arg2 ;
-(NSString *)localizedString;
@end

