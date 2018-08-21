/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKFaceCollectionObserver <NSObject>
@optional
-(void)faceCollectionDidLoad:(id)arg1;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)faceCollectionDidReorderFaces:(id)arg1;
-(void)faceCollectionDidReset:(id)arg1;

@end

