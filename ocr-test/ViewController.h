//
//  ViewController.h
//  ocr-test
//
//  Created by Jacky <newbdez33@gmail.com> on 11/04/2014.
//  Copyright (c) 2014 Salmonapps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, weak) IBOutlet UIImageView *photoView;
@property (nonatomic, weak) IBOutlet UILabel *textLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

- (IBAction)takePhoto:(id)sender;
- (IBAction)selectPhoto:(id)sender;
- (IBAction)recognizeIt:(id)sender;

@end
