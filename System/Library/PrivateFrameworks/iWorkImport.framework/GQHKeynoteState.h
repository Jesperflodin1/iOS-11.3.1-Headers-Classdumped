/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHState.h>

@interface GQHKeynoteState : GQHState {

	int mCurrentSlide;
	CGSize mSlideSize;
	int mProgressiveIndex;

}
-(BOOL)shouldMapLinkWithUrl:(CFStringRef)arg1 ;
-(void)setProgressiveIndex:(int)arg1 ;
-(void)incrementCurrentSlide;
-(int)currentSlide;
-(BOOL)shouldStreamContent;
-(int)progressiveIndex;
-(CGSize)slideSize;
-(void)setSlideSize:(CGSize)arg1 ;
@end

