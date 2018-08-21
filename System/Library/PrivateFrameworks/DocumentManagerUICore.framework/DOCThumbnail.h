/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSOperation;


@protocol DOCThumbnail <NSObject>
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) NSOperation * operation; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@required
-(NSOperation *)operation;
-(BOOL)isLoading;
-(UIImage *)thumbnail;
-(void)addListener:(id)arg1;
-(void)removeListener:(id)arg1;
-(BOOL)isRepresentativeIcon;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;
-(void)scheduleUpdateIfNeeded;

@end

