/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSOperationQueue, NSMapTable;

@interface MPArtworkResizeUtility : NSObject {

	NSObject*<OS_dispatch_queue> _artworkResizingAccessQueue;
	NSOperationQueue* _artworkResizingOperationQueue;
	NSMapTable* _artworkResizingOperations;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> artworkResizingAccessQueue;              //@synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * artworkResizingOperationQueue;                     //@synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * artworkResizingOperations;                               //@synthesize artworkResizingOperations=_artworkResizingOperations - In the implementation block
-(id)init;
-(void)setArtworkResizingAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setArtworkResizingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)artworkResizingOperationQueue;
-(void)setArtworkResizingOperations:(NSMapTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)artworkResizingAccessQueue;
-(NSMapTable *)artworkResizingOperations;
-(id)resizeImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 saveToDestinationURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancelResizeImage:(id)arg1 ;
@end

