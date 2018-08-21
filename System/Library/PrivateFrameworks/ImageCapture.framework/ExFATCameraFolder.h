/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFolder.h>

@interface ExFATCameraFolder : ICCameraFolder {

	void* _exFATCameraFolderProperties;

}

@property (readonly) id object; 
@property (readonly) timespec fsCreationTime; 
@property (readonly) timespec fsModificationTime; 
@property (readonly) long long fsSize; 
-(void)dealloc;
-(id)object;
-(void)enumerateContent;
-(BOOL)deleteItemFromCamera:(id)arg1 ;
-(timespec)fsCreationTime;
-(long long)fsSize;
-(timespec)fsModificationTime;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 object:(id)arg4 fsCreationTime:(timespec)arg5 fsModificationTime:(timespec)arg6 fsSize:(long long)arg7 ;
-(void)finalize;
@end
