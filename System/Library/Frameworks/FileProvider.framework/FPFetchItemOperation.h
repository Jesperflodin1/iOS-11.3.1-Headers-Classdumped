/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class FPItemID;

@interface FPFetchItemOperation : FPActionOperation {

	FPItemID* _itemID;
	/*^block*/id _fetchCompletionBlock;

}

@property (nonatomic,copy) id fetchCompletionBlock;              //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
-(void)mainWithExtensionProxy:(id)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(id)fetchCompletionBlock;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithItemID:(id)arg1 ;
@end

