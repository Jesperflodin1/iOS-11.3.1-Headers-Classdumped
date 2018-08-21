/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, ASDJobManifest;

@interface ASDJobOptions : NSObject <NSSecureCoding> {

	NSXPCConnection* _endpoint;
	ASDJobManifest* _manifest;

}

@property (nonatomic,retain) NSXPCConnection * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) ASDJobManifest * manifest;               //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(void)setManifest:(ASDJobManifest *)arg1 ;
-(ASDJobManifest *)manifest;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
@end

