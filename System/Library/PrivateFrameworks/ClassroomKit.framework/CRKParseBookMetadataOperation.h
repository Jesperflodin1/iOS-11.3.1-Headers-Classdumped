/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation {

	BOOL mParseImage;
	CRKBook* _book;

}

@property (nonatomic,readonly) CRKBook * book;              //@synthesize book=_book - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithBook:(id)arg1 parseImage:(BOOL)arg2 ;
-(CRKBook *)book;
-(void)parseContentsFilePathOperationDidFinish:(id)arg1 ;
-(void)parseBookContentsOperationDidFinish:(id)arg1 ;
@end

