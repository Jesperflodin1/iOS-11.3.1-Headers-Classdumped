/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	NSString* _token;
	long long _handle;

}

@property (retain) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;              //@synthesize handle=_handle - In the implementation block
-(void)expel;
-(long long)handle;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)consume;
-(void)setHandle:(long long)arg1 ;
-(id)initWithExtension:(id)arg1 ;
@end
