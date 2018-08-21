/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _SFQuickLookDocument;

@interface _SFQuickLookDocumentWriter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _filePathAccessedOnDispatchQueue;
	BOOL _hasFinishedWriting;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,copy) NSString * filePathAccessedOnDispatchQueue; 
@property (nonatomic,readonly) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishedWriting;                               //@synthesize hasFinishedWriting=_hasFinishedWriting - In the implementation block
-(_SFQuickLookDocument *)quickLookDocument;
-(void)setFilePathAccessedOnDispatchQueue:(NSString *)arg1 ;
-(NSString *)filePathAccessedOnDispatchQueue;
-(id)initWithFileName:(id)arg1 uti:(id)arg2 ;
-(void)writeDataAndClose:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasFinishedWriting;
@end
