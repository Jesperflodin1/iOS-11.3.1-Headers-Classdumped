/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSExtension, NSString;


@protocol DKExtensionAttributes
@property (nonatomic,readonly) NSExtension * extension; 
@property (getter=isHeadless,nonatomic,readonly) BOOL headless; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(NSExtension *)extension;
-(BOOL)isHeadless;
-(id)initWithExtension:(id)arg1;

@end
