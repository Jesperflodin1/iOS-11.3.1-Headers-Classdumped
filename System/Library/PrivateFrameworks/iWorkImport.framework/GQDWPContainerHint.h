/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDWPContainerHint : NSObject {

	long long mPageIndex;
	long long mCIndex;
	long long mSIndex;
	long long mLIndex;
	long long mAnchorLocation;
	double mAttachmentPosition;
	CGRect mFrame;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(long long)cIndex;
-(double)attachmentPosition;
-(long long)anchorLocation;
-(id)initWithPageIndex:(long long)arg1 cIndex:(long long)arg2 sIndex:(long long)arg3 lIndex:(long long)arg4 anchorLocation:(long long)arg5 frame:(CGRect)arg6 ;
-(long long)sIndex;
-(long long)lIndex;
-(CGRect)frame;
-(long long)pageIndex;
@end

