/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXMediaEvent.h>

@class NSArray;

@interface SXMediaViewEvent : SXMediaEvent {

	unsigned long long _galleryImageCount;
	NSArray* _galleryImageIds;

}

@property (assign,nonatomic) unsigned long long galleryImageCount;              //@synthesize galleryImageCount=_galleryImageCount - In the implementation block
@property (nonatomic,retain) NSArray * galleryImageIds;                         //@synthesize galleryImageIds=_galleryImageIds - In the implementation block
-(void)setGalleryImageCount:(unsigned long long)arg1 ;
-(unsigned long long)galleryImageCount;
-(NSArray *)galleryImageIds;
-(void)setGalleryImageIds:(NSArray *)arg1 ;
@end

