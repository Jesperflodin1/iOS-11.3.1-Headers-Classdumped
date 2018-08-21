/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject {

	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
+(id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 ;
-(id)init;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imageCache;
-(id)imageNamed:(id)arg1 tintColor:(id)arg2 ;
@end
