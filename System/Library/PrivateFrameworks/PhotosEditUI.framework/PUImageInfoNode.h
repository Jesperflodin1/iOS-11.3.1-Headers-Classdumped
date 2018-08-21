/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol PUImageInfoNode <PXRunNode>
@property (nonatomic,readonly) NSURL * imageDataURL; 
@property (nonatomic,readonly) NSString * imageDataUTI; 
@property (nonatomic,readonly) long long imageExifOrientation; 
@required
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(long long)imageExifOrientation;

@end

