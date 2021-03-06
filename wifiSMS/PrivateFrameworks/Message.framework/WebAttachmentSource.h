/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSURL;



@interface WebAttachmentSource : WRObject 
{
    NSURL *_baseURL;
    unsigned int _uniqueId : 30;
}

+ (id)invalidBaseURL;

- (void)dealloc;
- (id)init;
- (id)baseURL;
- (NSUInteger)uniqueIdentifier;
- (id)attachmentForURL:(id)arg1;
- (NSInteger)priority;

@end
