/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LPResolvable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface LPIconMetadata : NSObject <_LPResolvable, NSSecureCoding> {

	unsigned _version;
	NSURL* _URL;
	NSString* _accessibilityText;

}

@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;              //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)accessibilityText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(unsigned)version;
-(id)_initWithURL:(id)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(long long)maximumBytes;
-(id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isValidMIMEType:(id)arg1 ;
@end

