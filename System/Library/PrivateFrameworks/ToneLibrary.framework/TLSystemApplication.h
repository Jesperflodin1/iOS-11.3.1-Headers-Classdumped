/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLSystemApplication : NSObject {

	NSString* _bundleIdentifier;
	NSString* _name;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)defaultSystemApplication;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 ;
@end

