/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareDestroyCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (copy) id shareDestroyCompletionBlock;              //@synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock - In the implementation block
-(void)main;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 ;
-(id)shareDestroyCompletionBlock;
-(void)setShareDestroyCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end
