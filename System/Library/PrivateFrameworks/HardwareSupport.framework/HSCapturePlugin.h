/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HSCapturePlugin : NSObject {

	BOOL _closeDylibOnDealloc;
	void* _dylib_handle;
	NSString* _path;
	void* _creatorFunction;

}

@property (nonatomic,readonly) void* creatorFunction;              //@synthesize creatorFunction=_creatorFunction - In the implementation block
+(id)defaultPlugin;
-(void)dealloc;
-(id)description;
-(BOOL)close;
-(void*)creatorFunction;
-(id)initFromDylibPath:(id)arg1 withCreatorSymbol:(id)arg2 andCloseOnDealloc:(BOOL)arg3 ;
@end

