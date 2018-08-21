/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMultipleUnknownContactsViewControllerDelegate.h>

@protocol CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate;
@class CNQueue, CNContactStore, UIViewController, NSString;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate> {

	id<CNVCardImportControllerPresentationDelegate> _presentationDelegate;
	id<CNVCardImportControllerDelegate> _delegate;
	CNQueue* _receivedContactsQueue;
	CNContactStore* _contactStore;
	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) id<CNVCardImportControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) CNQueue * receivedContactsQueue;                                                          //@synthesize receivedContactsQueue=_receivedContactsQueue - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;                                        //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CNVCardImportControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNVCardImportControllerDelegate>)delegate;
-(void)setDelegate:(id<CNVCardImportControllerDelegate>)arg1 ;
-(UIViewController *)presentedViewController;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2 ;
-(void)enqueueContacts:(id)arg1 ;
-(BOOL)enqueueContactsAtURL:(id)arg1 ;
-(void)presentEnqueueResultsUIForResultContacts:(id)arg1 ;
-(id)contactsFromURL:(id)arg1 ;
-(CNQueue *)receivedContactsQueue;
-(void)processNextContacts;
-(void)presentImportUIForContacts:(id)arg1 ;
-(void)setReceivedContactsQueue:(CNQueue *)arg1 ;
-(void)saveUnknownPersons:(id)arg1 ;
-(void)cancelModalUnknownPersons:(id)arg1 ;
-(id)dequeueContacts;
-(void)dismissContactsAndPresentNext;
-(void)setPresentationDelegate:(id<CNVCardImportControllerPresentationDelegate>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNVCardImportControllerPresentationDelegate>)presentationDelegate;
@end

