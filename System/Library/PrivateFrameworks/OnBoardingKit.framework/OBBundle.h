/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface OBBundle : NSObject {

	NSString* _identifier;
	NSBundle* _bundle;
	NSString* _bundleVersion;

}

@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;              //@synthesize bundleVersion=_bundleVersion - In the implementation block
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)bundleAtPath:(id)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)identifier;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)privacyFlow;
@end
