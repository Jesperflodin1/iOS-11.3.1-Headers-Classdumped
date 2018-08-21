/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemFetcher.h>

@class QLURLHandler, NSFileCoordinator, NSMutableArray, NSNumber, NSURL;

@interface QLUbiquitousItemFetcher : QLItemFetcher {

	QLURLHandler* _urlHandler;
	NSFileCoordinator* _fileCoordinator;
	NSMutableArray* _updateBlocks;
	id _progressSubscriber;
	NSNumber* _sizeTotalUnitCount;
	QLURLHandler* _zipPackageUrlHandler;
	BOOL _shouldZipPackageIfNeeded;

}

@property (nonatomic,readonly) NSURL * fileURL; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)itemSize;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSURL *)fileURL;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)initWithZippingPackageIfNeeded:(BOOL)arg1 ;
-(void)_removeUpdateBlockIfNeeded:(/*^block*/id)arg1 ;
-(id)_createURLForPackageIfNeeded;
-(void)subscribeToPreviewItemProgress;
-(void)_deleteTempraryZipPackageFileIfNeeded;
-(id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(BOOL)canBeCanceled;
-(void)cancelFetch;
@end

