/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHExternalAssetResource, NSURL, NSData;

@interface PHAssetResourceValidatedContext : NSObject {

	PHExternalAssetResource* _resource;
	NSURL* _validatedURL;
	NSData* _validatedData;

}

@property (nonatomic,readonly) PHExternalAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSURL * validatedURL;                            //@synthesize validatedURL=_validatedURL - In the implementation block
@property (nonatomic,readonly) NSData * validatedData;                          //@synthesize validatedData=_validatedData - In the implementation block
-(PHExternalAssetResource *)resource;
-(id)initWithResource:(id)arg1 validatedURL:(id)arg2 validatedData:(id)arg3 ;
-(NSURL *)validatedURL;
-(NSData *)validatedData;
@end
