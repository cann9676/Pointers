//
//  ViewController.h
//  Pointers
//
//  Created by Chelsea Hannah on 8/8/22.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
//a pointer points to a location in memory on your device.
@property (nonatomic,strong) NSString *name;
//the * is a pointer
@property (nonatomic) int age;
//This contains no pointer because it is a native type.
//Pointers are used on class-based objects.
@property (nonatomic) NSInteger debt;
@property (nonatomic) NSNumber *bankBalance;

@end

