/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {

	NSString* _displayName;
	NSString* _identifier;
	NSString* _transformIdentifier;
	NSLocale* _romanizationLocale;

}

@property (readonly) NSLocale * romanizationLocale;              //@synthesize romanizationLocale=_romanizationLocale - In the implementation block
+(id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(id)transcribeText:(id)arg1 withLocale:(id)arg2 ;
-(id)transcribeText:(id)arg1 ;
-(NSLocale *)romanizationLocale;
@end

