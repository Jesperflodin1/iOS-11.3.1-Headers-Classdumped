/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class CIImage, NSData, NSString;

@interface PLImageContainer : NSObject {

	void* _ioSurface;
	CIImage* _CIImage;
	CGSize _pixelSize;
	CGImageRef _CGImage;
	NSData* _data;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) void* ioSurface; 
-(void)dealloc;
-(CGImageRef)CGImage;
-(NSData *)data;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(void*)ioSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(CGSize)pixelSize;
-(id)initWithUIImage:(id)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 ioSurface:(void*)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(CGSize)arg6 ;
-(NSString *)uniformTypeIdentifier;
-(id)initWithUIImage:(id)arg1 ;
@end

