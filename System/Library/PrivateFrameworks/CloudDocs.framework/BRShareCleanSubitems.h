/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCleanSubitems : BROperation {

	NSURL* _url;
	/*^block*/id _cleanSubitemsCompletionBlock;

}

@property (copy) id cleanSubitemsCompletionBlock;              //@synthesize cleanSubitemsCompletionBlock=_cleanSubitemsCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(id)cleanSubitemsCompletionBlock;
-(void)setCleanSubitemsCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

