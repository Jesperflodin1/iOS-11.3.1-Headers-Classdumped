/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class EBReaderState, EXReadState;

@interface EBOfficeArtReaderState : OABReaderState {

	EBReaderState* mReaderState;
	EXReadState* mXmlDocumentState;

}
-(void)dealloc;
-(id)xmlDrawingState;
-(id)readerState;
-(id)initWithReaderState:(id)arg1 ;
@end

