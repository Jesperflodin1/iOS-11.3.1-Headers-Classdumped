/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFComposeRecipientTextViewDelegate <NSObject>
@optional
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1;
-(void)recipientViewDidResignFirstResponder:(id)arg1;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)composeRecipientViewReturnPressed:(id)arg1;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
-(BOOL)composeRecipientViewShowingSearchResults:(id)arg1;
-(BOOL)presentSearchResultsForComposeRecipientView:(id)arg1;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
-(BOOL)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1;

@end

