/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIKeyboardOutput, TIRevisionHistory, TIKeyboardState;

@interface TIKeyboardInputManagerKeyboardContext : NSObject {

	TIKeyboardOutput* _output;
	TIRevisionHistory* _revisionHistory;
	TIKeyboardState* _currentState;

}

@property (nonatomic,readonly) TIKeyboardState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) TIKeyboardOutput * output;                      //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIRevisionHistory * revisionHistory;              //@synthesize revisionHistory=_revisionHistory - In the implementation block
-(void)dealloc;
-(TIKeyboardState *)currentState;
-(void)insertText:(id)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)clearInputForMarkedText;
-(void)acceptCandidate:(id)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
-(void)deleteBackward:(unsigned long long)arg1 ;
-(TIRevisionHistory *)revisionHistory;
-(id)initWithKeyboardState:(id)arg1 ;
-(void)deleteHandwritingStrokes:(id)arg1 ;
-(void)setRevisionHistory:(TIRevisionHistory *)arg1 ;
-(TIKeyboardOutput *)output;
-(void)deleteForward:(unsigned long long)arg1 ;
@end

